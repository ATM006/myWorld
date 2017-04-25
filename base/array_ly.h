/*************************************************************************
    * File Name: array_ly.h
    * Author   : atm
    * Mail     : 18829897162@163.com
    * Time     : 2017年04月25日 星期二 11时29分59秒
 ************************************************************************/


#include <iostream>

template<class Type>
void PrintArr(Type *ar,int n){
	for(int i=0;i<n;i++){
		std::cout<<ar[i]<<" ";
	}
	std::cout<<std::endl;
}

