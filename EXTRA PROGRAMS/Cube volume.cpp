#include <iostream>
using namespace std;
class volume{
    private:
        int length;
    public:
        volume(int a){
            length=a;
        }
        friend void cubevol(volume vol);
        
};
void cubevol(volume vol){
    int v= vol.length*vol.length*vol.length;
    cout<<v;
}
int main(){
    volume vol(5);
    cubevol(vol);
    return 0;
}
