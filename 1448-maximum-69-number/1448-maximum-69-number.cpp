class Solution {
public:
    int maximum69Number (int num) {
        int q = num;
        int count=0;
        int p=0;
        int z=0;
        while(q!=0){
            if(q%10==6) p=count;
            z=z*10+q%10;
            q=q/10;
            count++;
        }
        p=count-p;
        int r=0;
        for(int i=0;i<count;i++){
            if(i==p-1){
                r=r*10+9;
                z=z/10;
                continue;
            }else{
                r=r*10+z%10;
                z=z/10;
            }
        }
        return r;
    }
};