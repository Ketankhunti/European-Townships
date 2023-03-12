#include<bits/stdc++.h>

using namespace  std;


vector<int> splitLine(string str) {
    vector<int> v;
    str+=',';
    int n = str.size();
    string temp="";
    for (int i = 0; i < n; i++) {
        if (str[i] ==',') {
            v.push_back(stoi(temp));
            temp="";
        }else temp.push_back(str[i]);
    }
    //v.push_back(stoi(temp));
    return v;
}

int main() {

    freopen("input_small.txt","r",stdin);
    freopen("output_small.txt","w",stdout);

     int townships; 
     cin>>townships;
       
      while(townships--)  {
        int houses; 
        cin>>houses;

        double totalWalls = 0;

        while(houses--){

            int totalBedRoom,R,S,H;
           cin.ignore();
           string str;
           cin>>str;

            vector<int> v = splitLine(str);
            totalBedRoom = v[0];
            R = v[1];
            S = v[2];
            H = v[3];
            totalWalls += (H*6) + (R*3) + (S*4);
        }
        double accentColor = (totalWalls*1.00/3.00)*1.50;
        double normalColor = (totalWalls*(2.00/3.00))*2.25;
        double totalTime = (totalWalls*2.50)*(1.00/3.00) + (totalWalls*3.25)*(2.00/3.00);
        cout<<"Case #"<<townships+1<<": ";
        cout<<fixed<<setprecision(2)<<totalTime<<", "<<accentColor<<", "
        <<normalColor<<endl;

    }
  

}