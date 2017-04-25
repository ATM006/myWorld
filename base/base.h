/*************************************************************************
    * File Name: base.h
    * Author   : atm
    * Mail     : 18829897162@163.com
    * Time     : 2017年04月25日 星期二 11时49分00秒
 ************************************************************************/
#include <iostream>

template<class Type>
void Swap(Type &a,Type &b){
	Type tmp = a;
	a = b;
	b = tmp;
}
