#include <iostream>
using namespace std;
int count=0;
int minus=count;

int merge(int arr[],int l,int m,int r){
	static int count;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	int i,j,k;
	for(i=0;i<n1;i++){
		L[i]=arr[l+i];
	}
	for(j=0;j<n2;j++){
		R[j]=arr[m+j+1];
	}
	i=0,j=0,k=l;
	while(i<n1&&j<n2){
		if(L[i]<=R[j]){
			arr[k]=L[i];
			i++;
			
		}
		else{
			arr[k]=R[j];
			j++;
			
		}
		k++;
		count++;
	}
	while(i<n1){
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k]=R[j];
		j++;
		k++;
	}
	return count;
}
int mergeSort(int arr[],int l,int r){
	int comp;
	if(l<r){
		
		int m = l+(r-l)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		

		comp=merge(arr,l,m,r);
	}
	return comp;
}
int main(){
	
	int t;
	cin >> t;
	int index=0;
	int n,arr[111],arr1[t];
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++)
			cin >> arr[i];

		int c=mergeSort(arr,0,n-1);
		arr1[index]=c;
		for(int i=0;i<n;i++)
			cout << arr[i] << " ";
		if(index==0)
		cout<<endl <<"comparison = "<< c<<endl;
		else
		cout<<endl <<"comparison = " << c-arr1[index-1]<<endl;
		
		index++;
	}
}