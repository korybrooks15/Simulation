#include <iostream>
using namespace std;

void wrong_ans() {
  cout << "Sorry that was the wrong answer\n";
  }
 void correct_ans() {
   cout << "Good Job!\n";
 }
  
//fucntion for puzzles/riddles

void puzzles(int x) {
  if (choice == 1) {
    string ans;
    cout << "Jimmy's mother had three children. The first was called april and the second was called May. What was the name of the third?\n"
    ;
    getline (cin, ans);
    toupper(ans);
    if(ans != 'JIMMY') {
      wrong_ans();
    //  score = score - 10; //we can change how many points the players looses depending on the difficulty of the question
    else
      correct_ans();
      }
   }
    
  if(choice == 2) {
    string ans;
    cout << " You can hold it without using your hand or your arms. What is it?\n";
    getline.(cin, ans);
    toupper(ans);
    if(ans != 'YOUR BREATH' || ans != 'BREATH') {
      wrong_ans();
    //  score = score - 10;
     }
    else
      correct_ans();
    }
    
   if (choice == 3) {
    string ans;
    cout << "234\n";
    cout << "23 \n";
    cout << "TIP:the answer is not 4\n";
    getline.(cin, ans);
    if(ans != '5') {
      wrong_ans();
     // score = score - 10;
     }
    else
      correct_ans();
    }
    
    if (choice == 4) {
    string ans;
    cout << "Given that:\n"
    cout << "1 bottle of drink + 1 bottle of drink + 1 bottle of drink = 30\n";
    cout << "1 bottle of drink + 1 cheeseburger + 1 cheeseburger = 20\n";
    cout << "1 cheeseburger + 2 glasses of drink + 2 glasses of drink = 9\n";
    cout << "1 cheeseburger + 1 glass of drink × 1 bottle of drink = ?\n";
    getline.(cin, ans);
    if (ans != '15') {
      wrong_ans();
     // score = score - 10;
     }
    else
        correct_ans();
    }
    
    if (choice == 5) {
      string ans;
      cout << "Poor people have it. Rich people need it. If you eat it you die. What is it?\n";
      getline.(cin, ans);
      toupper(ans);
      if(ans != 'NOTHING') {
        wrong_ans();
       // score = score - 10;
      }
      else
        correct_ans();
    }
  
    if(choice == 6) {
      string ans;
      cout << "What word becomes shorter after you add to letters to it?\n";
      getline.(cin, ans);
      toupper(ans);
      if(ans != 'SHORT') {
        wrong_ans();
     //   score = score - 10;
      }
      else
        correct_ans();
    }
  
    if(choice == 7) {
      string ans;
      cout << "\n";
      getline.(cin, ans);
      toupper(ans);
      if(ans != ) {
        wrong_ans();
       // score = score - 10;
      }
      else 
        correct_ans();
    }
        
        
    





   
   
   
   
