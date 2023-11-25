#include "../Phase3/teamScribe.h"
int main() {
    member Eve = create_member("Eve", "eve@email.com", "777888999");
    member Charlie = create_member("Charlie", "charlie@email.com", "111222333");

    /*Create teams*/
    team TeamM = create_team("TeamM", "Team M Description", {Eve});
    team TeamN = create_team("TeamN", "Team N Description", {Charlie});

    /*Create sub-teams*/
    team SubTeam1 = create_team("SubTeam1", "Sub Team 1 Description", {Eve});
    team SubTeam2 = create_team("SubTeam2", "Sub Team 2 Description", {Charlie});
    TeamM += SubTeam1;
    TeamN += SubTeam2;

    /*Display member and team info*/
    Eve.display(0);
    Charlie.display(0);
    TeamM.show(0);
    TeamN.show(0);
    team TeamL = TeamM | TeamN;
    TeamL.show(0);
    /*Save and load from document*/
    savetoDocument("test_case_3");
    loadfromDocument("test_case_3");

    /*Display member and team info after loading from document*/
    Eve.display(0);
    Charlie.display(0);
    TeamM.show(0);
    TeamN.show(0);

    return 0;
}
