
#include<iostream>
using namespace std;

//find Sqrt using Binary Search
double sqrt(int num, int precision) {
    int s = 0;
    int e = num;
    double ans = -1;
    while(s <= e) {
        
        int mid = (s+e)/2;
        
        if(mid*mid == num)
            return mid;
        if ((mid*mid) < num && ((mid + 1)*(mid + 1) > num))
		{ //imp condition
			ans = mid;
			break;
		}
        else if(mid*mid < num) {
            s = mid+1;
        }
        else{
            e = mid - 1;
        }
    }
    
    double factor = 1;
    double j;
    for(int i=0; i<precision; i++) {
        factor = factor/10;
        for(j = ans; j*j <=num; j += factor) {
            ans = j;
        }
    }
    return ans;
}
main(){
       int n;
      cout<<"Enter n : ";
      cin>>n;;
      // cout<<"Square root of "<<n<<" is : "<<obj.sqrt(n)<<endl<<endl;
      cout<<"Square root of "<<n<<" is : "<<sqrt(n,0.001)<<endl<<endl;
}