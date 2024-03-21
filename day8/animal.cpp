#include<iostream>
using namespace std;
//Base class Winged Animals
class WingedAnimals{
   protected:
   int nlegs,features;
   string weight;
   int wingspan;
   public:
WingedAnimals(int noleg,int feat,string w,int wspan):nlegs(noleg),features(feat),weight(w),wingspan(wspan){}
void show(){
    cout<<"No of legs:"<<nlegs<<endl;
    cout<<"Feathers:"<<features<<endl;
    cout<<"Weight:"<<weight<<endl;
    cout<<"WingSpan:"<<wingspan<<endl<<endl;
}



};
//Base class Mammals
class Mammals{
    protected:
    int gestationPeriod;
    string fur,endothermy,vertebrate,mamheart,diaphragm;
    public:
    Mammals(int gestp,string f,string e,string vert,string heart,string dia):gestationPeriod(gestp),fur(f),endothermy(e),vertebrate(vert),mamheart(heart),diaphragm(dia){}
    void show(){
        cout<<"Gestation period:"<<gestationPeriod<<endl;
        cout<<"Fur:"<<fur<<endl;
        cout<<"Endothermy:"<<endothermy<<endl;
        cout<<"Vertebrate:"<<vertebrate<<endl;
        cout<<"Heart structure:"<<mamheart<<endl;
        cout<<"Diaphragm:"<<diaphragm<<endl;
    }


};
class Bat:public WingedAnimals,public Mammals{
    string species;
    public:
    Bat(int nlegs,int feat,string weight,int wspan,int gestp,string f,string e,string vert,string heart,string dia,string spe):WingedAnimals(nlegs,feat,weight,wspan),Mammals(gestp,f,e,vert,heart,dia),species(spe){}
    void display(){
        WingedAnimals::show();
        Mammals::show();
        cout<<"Species:"<<species<<endl;
    }

};
int main(){
    //creating object of class Bat
    Bat b(2,2,"Light-Weight",6,12,"Fur on body","Warm-Blooded","Single Vertebrae","Four chambered heart","Muscular Diaphragm","Fruit Bat");
    cout<<"Attributes of Winged Animals and Mammals common to Bat are as Follows:"<<endl;
    b.display();
    return 0;
}