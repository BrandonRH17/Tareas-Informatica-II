#include <iostream>
using namespace std;

float poductoPunto(const float* x, const float* y, const int dims){
    float v=0, suma=0;
    for (int i=0; i<dims; i++){
        v = x[i]*y[i];
        suma = suma + v;
    }
    cout << "El producto punto es:"<<endl;
    cout<<suma<<endl;
    return suma;
}

bool sonOrtogonales(const float* x, const float* y, const int dims){
    if (poductoPunto(x,y,dims)== 0.0f){
        cout << "El vector es ortogonal"<<endl;
        return true;
    }else{
        cout << "El vector no es ortogonal"<<endl;
        return false;
    }
}

bool esBase(const float* const* vector, int dims){
   bool l ,m; 
   for (int i=0; i <= dims-1; i++){
	   int h = i +1;
	   m = sonOrtogonales(vector[i], vector[h], dims);
	   if (m == true){
		   l = true;
	   }else {
		   l = false;
	   }
   }
    if (l == true ){
		cout<<"El conjunto es base "<< endl;
		return true;
	}else {
		cout<<"el conjunto no es base"<<endl;
	}
}
	



int main(){
    float* v1;
    float* v2;
    float* v;
    int dims; 
    cout<<"Ingrese la dimension:"<<endl;
    cin>>dims;

    v1 = new float[dims];
	v2 = new float[dims];

    cout<<"Ingrese el vector 1"<<endl;
    for (int l=0; l<dims; l++){
        cin>> v1[l];
    }
    cout<<"Ingrese el vector 2"<<endl;
    for (int j=0; j<dims; j++){
        cin>> v2[j];
    }

	v = new float [2];
	v[1]= *v1;
	v[2]= *v2;
    esBase(&v,dims);

}
