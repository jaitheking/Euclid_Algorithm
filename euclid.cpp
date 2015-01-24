#include <iostream>
#include <cmath>
using namespace std;

//Euclid`s Algorithm
int euclid(int a ,int b){
	int n1,n2,r;
    n1= a;
    n2 = b;
	while(n2 > 0){
		r= n1%n2;
		n1=n2;
		n2=r;

	}
    
	cout<<n1<<" is GCD"<<endl;
    
	return n1;
}

int extend_euclid(int a,int b){
    int a1,a2,a3,b1,b2,b3,q;
    int t1,t2,t3;
    a1 = 1;
    a2 = 0;
    a3 = a;
    b1 = 0;
    b2 = 1;
    b3 = b;

    while(true){
        if (b3==0){
            
            cout<<"No inverse."<<endl;
            return a3 = euclid(a,b);
            break;
            }
        if (b3==1){
            
            cout<<abs(b2)<<" is the inverse ."<<endl;
            return b3 = euclid(a,b) && b2;
            break;    
            }
    
        q = abs(a3/b3);
        t1 = a1-(q*b1);
     	t2 = a2-(q*b2);
     	t3 = a3-(q*b3);
     	a1 = b1;
     	a2 = b2;
     	a3 = b3;
     	b1 = t1;
     	b2 = t2;
     	b3 = t3;
        cout<<a1<<"|"<<a2<<"|"<<a3<<"|"<<b1<<"|"<<b2<<"|"<<b3<<endl;
 	};
    

}

int main(){
    int a,b,c;

	cout<<"Please enter two integers:";
	cin>>a>>b;
	c=euclid(a,b);
    if (c != 1)
        cout<<"No inverse for this pairing."<<endl;   
    else
        extend_euclid(a,b);
    
    
return 0;
}
