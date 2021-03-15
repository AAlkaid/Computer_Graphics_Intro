#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

int main(){
    Eigen::Vector3d v(2.0f, 1.0f, 1.0f);
    Eigen::Matrix3d rota;
    Eigen::Matrix3d tran;

    double theta = 45.0/180.0 * M_PI;
    rota << cos(theta), -1.0*sin(theta), 0,
            sin(theta), cos(theta)     , 0,
            0         ,   0            , 1;

    tran << 1, 0, 1,
            0, 1, 2,
            0, 0, 1;

    v = tran * rota * v;
    std::cout << v << std::endl;
    std::cout << "The answer is (" << v[0] << ',' << v[1] <<')' << std::endl;


    return 0;
}