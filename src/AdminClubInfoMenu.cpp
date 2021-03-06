#ifdef __APPLE__

#include "/Users/gourav/Documents/CPP_project/include/AdminClubInfoMenu.h"
#include "/Users/gourav/Documents/CPP_project/include/Club.h"

#else


#include"..\include\AdminClubInfoMenu.h"
#include"..\include\Club.h"

#endif

#include<iomanip>
void AdminClubInfoMenu::display(std::vector<Club>& club_holder)
{
    std::cout<<std::setw(40)<<std::setfill('*')<<"\n"<<std::setfill(' ');
    int i=0;
    for(auto t=club_holder.begin();t!=club_holder.end();t++,i++)
    {
        std::cout<<'['<<i<<']'<<' ';
        t->display_name();
    }
    std::cout<<std::setw(40)<<std::setfill('*')<<"\n"<<std::setfill(' ');
}

void AdminClubInfoMenu::display()
{
    std::cout<<"[1] New Club"<<std::setw(18)<<"[2] Edit Club"<<std::setw(28)<<'\n';
    std::cout<<"[3] Delete Club"<<std::setw(25)<<"[Q] Return to Admin Menu"<<'\n';
    std::cout<<"Enter Input corresponding to Action to be performed: ";
}