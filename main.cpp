#include <iostream>

using namespace std;

struct ToDo {
    string Data;
    string NameOfTheTask;
    int Priority;
};

int main()
{
    
    ToDo arrMyTask[3];
    
    //input
    for (int i = 0; i < 3; i++) {
    cout << "Please, enter Data: " << endl;
    cin >> arrMyTask[i].Data;
    
    cout << "Please, enter the name of the task: " << endl;
    cin >> arrMyTask[i].NameOfTheTask;
    
    cout << "Please, enter the Priority: " << endl;
    cin >> arrMyTask[i].Priority;
    }
    
    //cout<< first.Data << endl;
    //cout<< arrMyTask[0].Data << endl;
    
    //мы можем записать как first == arrMyTask[0] 
    
    cout<<"===================\n";
    cout<<"===================\n";
    
    //output    
      for(int i = 0; i < 3; i++){
          cout << arrMyTask[i].Data << endl;
          cout << arrMyTask[i].NameOfTheTask << endl;
          cout << arrMyTask[i].Priority << endl;
      }
    
    //   //cout <<  first.Data <<endl;
    //     cout << arr[0].Data     <<endl;
    //     cout << arr[0].NameOfTheTask << endl;
    //     cout << arr[0].Priority << endl;
        
    //     cout<<"===================\n";
        
    //     cout << arr[1].Data << endl;
    //     cout << arr[1].NameOfTheTask << endl;
    //     cout << arr[1].Priority << endl;
        
    //     cout<<"===================\n";
        
    //     cout << arr[2].Data << endl;
    //     cout << arr[2].NameOfTheTask << endl;
    //     cout << arr[2].Priority << endl;
        
        
    
 

    return 0;
}
