//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	// We can know any point in the triangle or not 
//	// by drowning a vectors by three vertices of the triangle,
//	// with test point.
//	// 
//	// the test point in the triangle if 
//	// det(ab, ap) > 0 && det(bc, bp) > 0 && det(ca, cp) > 0
//	//
//	// not, if 
//	// det(ab, ap) > 0 && det(bc, bp) > 0 && det(ca, cp) < 0 
//
//	// Enter the test point as p
//	float x, y;
//	cout << "Enter a point's x- and y-coordinates: ";
//	cin >> x >> y;
//
//	// Make a vectors
//	// We will assume a(0, 0), b(0, 100), c(200, 0), p(x, y) 
//	float ab_x, ab_y ,ap_x, ap_y, bc_x, bc_y,
//		bp_x, bp_y, ca_x, ca_y, cp_x, cp_y;
//	ab_x = 0;
//	ab_y = 100;
//
//	ap_x = x;
//	ap_y = y;
//
//	bc_x = 200;
//	bc_y = -100;
//
//	bp_x = x;
//	bp_y = y - 100;
//
//	ca_x = 200;
//	ca_y = 0;
//
//	cp_x = x - 200;
//	cp_y = y;
//
//	// compute the det()
//	float det_ab_ap, det_bc_bp, det_ca_cp;
//	det_ab_ap = (ab_x * ap_y) - (ab_y * ap_x);
//	det_bc_bp = (bc_x * bp_y) - (bc_y * bp_x);
//	det_ca_cp = (ca_x * cp_y) - (ca_y * cp_x);
//
//	// check
//	if ((det_ab_ap < 0 || det_bc_bp < 0 || det_ca_cp < 0) 
//		&& (det_ab_ap > 0 || det_bc_bp > 0 || det_ca_cp > 0))
//	{
//		cout << "The point is in the triangle" << endl;
//	}
//	else
//	{
//		cout << "The point is not in the triangle" << endl;
//	}
//
//	return 0;
//}