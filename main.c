#include <stdio.h>
int vcount=0;
int hcount=0;
int ncount=0;
    enum status
    {
        ACTIVE,
        RESTING,
        ON_MISSION,
        INJURED,
        IMPRISONED,
    };
    const char* role_text[] = { "Hero", "Villain", "Neutral" };
    const char* status_text[] = {
    "Active", "Resting", "On mission", "Injured", "Imprisoned" };
struct character
{
    int id;
    char name[20];
    enum role role;
    char power[10];
    int dangerlevel;
    char place[40];
    enum status status;
};
void showmenu()
{
    printf("===SUPERHERO AND VILLAIN DATA CONSOLE===");
    printf("1. Add new record");
    printf("2. Show data about individual");
    printf("3. Show Villains data");
    printf("4. Show Heroes data");
    printf("5. Show Neutrals data");
    printf("6. Show all records");
    printf("7. Save all records in .txt file");
    printf("8. Save progress");
}
int main()
{

}
