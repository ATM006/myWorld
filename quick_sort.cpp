/*************************************************************************
    * File Name: quick_sort.cpp
    * Author   : atm
    * Mail     : 18829897162@163.com
    * Time     : 2017年04月25日 星期二 11时33分21秒
 ************************************************************************/

#include <iostream>

#include "base/base.h"
#include "base/array_ly.h"
using namespace std;

template<class Type>
int Partition(Type* ar,int left,int right){
	int i = left;
	int j = right;
	Type temp = ar[i];

	while(i<j){
		while(i<j && ar[j] >= temp) --j;
		if(i<j)	ar[i] = ar[j];
		while(i<j && ar[i] <= temp)	++i;
		if(i<j)	ar[j] = ar[i];
	}
	ar[i] = temp;
	return i;
}

template<class Type>
void quick(Type* ar,int left,int right){
	if(left<right){
		int index = Partition(ar,left,right);
		quick(ar,left,index-1);
		quick(ar,index+1,right);
	}
}


template<class Type>
void quick_sort(Type *ar,int n){
	quick(ar,0,n-1);
}



int main(){
	
	int ar[]={1,3,5,7,9,2,4,6,8,0};
	int len = sizeof(ar)/sizeof(ar[0]);
	
	PrintArr(ar,len);

	quick_sort(ar,len);

	PrintArr(ar,len);

	return 0;
}

