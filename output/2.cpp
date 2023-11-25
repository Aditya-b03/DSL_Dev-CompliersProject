#include "../Phase3/teamScribe.h"
void performCombinedOperations() {
    member alice = create_member("Alice", "alice@email.com", "123-456");
    member bob = create_member("Bob", "bob@email.com", "789-012");

    /* Creating teams */
    team developmentTeam = create_team("Development Team", "Coding Wizards");
    developmentTeam += alice;
    developmentTeam += bob;

    task codingTask = create_task("Coding Task", "Implement new feature", 2, "In Progress");
    alice += codingTask;
    developmentTeam.show(0);
    alice.display(0);
}

int main() {
    /* Performing combined operations */
    performCombinedOperations();
    savetoDocument("test_case_2");

    return 0;
}
