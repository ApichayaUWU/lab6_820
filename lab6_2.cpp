#include <iostream>
#include <cmath>

using namespace std;

double deg2rad(double deg1){
     double rad1 = deg1 * M_PI / 180;
     return rad1;
}
double rad2deg(double deg2){
    double rad2 = deg2 * 180 / M_PI;
     return rad2;
}
double findXComponent(double lenx1,double lenx2,double x1,double x2){
    double vx1 = lenx1*(cos(x1)) ;
    double vx2 = lenx2*(cos(x2)) ;
    double sx = vx1 + vx2;
    return sx;

}
int findYComponent(double leny1,double leny2,double y1,double y2){
    double vy1 = leny1*(sin(y1)) ;
    double vy2 = leny2*(sin(y2)) ;
    double sy = vy1 + vy2;
    return sy;

}
double pythagoras(double x, double y){
    double f = sqrt(pow(x,2)+pow(y,2));
    return f;
}

double showResult(double result_length,double result_direction){
    cout <<"Length of the resultant vector "<< result_length << endl;
    cout << "Direction of the resultant vector (deg)" << result_direction << endl;
    return 0;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
