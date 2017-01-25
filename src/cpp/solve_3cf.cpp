#include "base.h"

namespace ieigen
{
	Vector3cf solve(const Matrix3cf& A, const Vector3cf& b, const solver_type& solver)
	{
		Vector3cf x;
		switch(solver)
		{
			case partialPivLu:
				x = A.partialPivLu().solve(b);
				break;
			case fullPivLu:
				x = A.fullPivLu().solve(b);
				break;
			case householderQr:
				x = A.householderQr().solve(b);
				break;
			case colPivHouseholderQr:
				x = A.colPivHouseholderQr().solve(b);
				break;
			case fullPivHouseholderQr:
				x = A.fullPivHouseholderQr().solve(b);
				break;
			case llt:
				x = A.llt().solve(b);
				break;
			case ldlt:
				x = A.ldlt().solve(b);
				break;
			case jacobiSvd:
				x = A.jacobiSvd().solve(b);
				break;
		}
		return x;
	}
}