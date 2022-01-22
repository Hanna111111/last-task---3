#include <iostream>

using namespace std;

struct ToDo {
    string Data;
    string NameOfTheTask;
    int Priority;
};


void InputElements(ToDo *&arrMyTask,int &size){
    ToDo yourTask;
    
    cout << "Please, enter Data: " << endl;
    cin >> yourTask.Data;
    
    cin.ignore();
    cout << "Please, enter the name of the task: " << endl;
    getline(cin, yourTask.NameOfTheTask);
    
    cout << "Please, enter the Priority: " << endl;
    cin >> yourTask.Priority;
    
    arrMyTask[size] = yourTask;
    size++;

}


void AddElement(ToDo *&arrMyTask, int &size, const ToDo value){
    ToDo *newArr = new ToDo[size+1];
    
    
    for (int i = 0; i < size; i++) {
        newArr[i] = arrMyTask[i];
    }
    
    InputElements(newArr, size);
    
    delete [] arrMyTask;
    arrMyTask = newArr;
    
}


void OuputElements(ToDo *arrMyTask,int size){
     
      for(int i = 0; i < size; i++){
          cout << "Index of your task: "<<i<<endl;
          cout << arrMyTask[i].Data << endl;
          cout << arrMyTask[i].NameOfTheTask << endl;
          cout << arrMyTask[i].Priority << endl;
          cout << "------------------- "<< endl;
      }
}
int main()
    

//"Main menu: "
{
    
    ToDo value;
    int size = 0;
    ToDo *arrMyTask = new ToDo[size];
    //cout<<"Input your size1: "<<size<<endl;
    
    //InputElements(arrMyTask,size);
    bool needed = true;
    int selection;
    //while -> switch case
    //добавить, вывести, выйти из программы и дефолт
    while(needed){
        cout << "Please, select the operation: " << endl;
        cout << "Please, enter 1 to add your task." << endl;
        cout << "Please, enter 2 to output your information." << endl;
        cout << "Please, enter 3 to exit your program." << endl;
        
        cin >> selection;
        
        switch(selection){
            case 1:
            cout << "You chose to add your task." << endl;
            AddElement(arrMyTask, size, value);
            break;
            
            case 2: 
            cout << "\n=======================\n" <<endl;
            cout << "Here's your information:" <<endl;
            
            OuputElements(arrMyTask,size);
            break;
            
            case 3:
                needed = false;
                cout << "Exit from the program." <<endl;
            break;
            
            default:
            cout<< "I don't know this type of operation" << endl;
            break;
           

        }
    }
    
    
    
    
    
    return 0;
}
