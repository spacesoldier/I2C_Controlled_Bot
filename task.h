#ifndef TASK_H
#define TASK_H



using namespace std;
class Task{
   private: 
        int interval;
   public:
        int getInterval(); 
        void setInterval(int newInterval);  
        virtual void init(); 
        virtual void call(); 

};  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
 

#endif 
  
  
  
  


