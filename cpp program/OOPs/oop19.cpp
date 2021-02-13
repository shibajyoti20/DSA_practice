#include<iostream>
using namespace std;


class Entity
{
    public:
        int x;
        int y;
        void Value(int x, int y)
        {
            this->x=x;
            this->y=y;
        }

        void ShowEntity()
        {
            cout<<this->x<<endl;
            cout<<this->y<<endl;
        }

          /*int GetX() const
          {
            const Enitity* e = this;
            return x;
          }*/
        
};

int main()
{
    Entity e;
    e.Value(10,20);
    e.ShowEntity();
    return 0;
}
