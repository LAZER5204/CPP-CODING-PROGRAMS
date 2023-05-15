#include <iostream>
using namespace std;
class area{
    private:
        int length;
        int breadth;
    public:
        area(int l,int b){
            length=l;
            breadth=b;
        }
        friend void cubearea(area ar);
        
};
void cubearea(area ar){
    int a=(ar.length)*(ar.breadth);
    cout<<a;
}
int main(){
    cout<<"enter sides";
    int x,y;
    cin>>x;
    cin>>y;
    area ar(x,y);
    cubearea(ar);
    return 0;
}
