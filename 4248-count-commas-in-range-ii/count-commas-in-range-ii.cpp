class Solution {
public:
    long long countCommas(long long n) {
        long long  temp=0;
        long long comma =0;
        if (n<999) return 0;
        if (n>999999999999999 && n<=999999999999999999){
            temp=n-999999999999999;
            comma+=5*temp;
            n=n-temp;
        }
        
        

        if (n>999999999999 && n<=999999999999999){
            temp=n-999999999999;
            comma+=4*temp;
            n=n-temp;
        }

        if (n>999999999 && n<=999999999999){
            temp=n-999999999;
            comma+=3*temp;
            n=n-temp;

            
        }
        if (n>999999 && n<=999999999){
            temp =n-999999;
            comma+=2*temp;
            n=n-temp;
        }

        if (n>999 && n<=999999) {
            temp =n-999;
            comma+=temp;
            n=n-temp;

        }
        
        
        
        
        return comma;
    }
};