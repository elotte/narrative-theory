/* This program provides an interactive user experience, taking the user through a series of print statements depending on what they input at the console. The program can be run multiple times. The program begins with main, at the bottom, and works upward. I have included some comments to clarify what certain pieces of code do. All comments are in blue, and have no effect on the code when it is executed. */

#include <stdio.h>
#include <stdlib.h> 
#include <limits.h> 
#include <string.h> 
#include <stdbool.h>


/* This is a recursive function that returns a boolean the last time it is called. It branches depending on user input, but each of the 6 branches must eventually be reached to get out of the recursive function. */
bool woolf(int *years_left, int numbers[]) {
    system("clear");
    char *names[6] = {"0) Bernard", "1) Neville", "2) Louis", "3) Jinny", "4) Susan", "5) Rhoda"}; // array of character names 
    int character;
    printf("You've arrived in the world of Woolfian style. The atoms are falling on the brain and we just aren't quite sure what to do with them. We need your help. But it's going to require some choices. Type 1 when you're ready to continue: \n");
    scanf("%d", &character);
    system("clear");
    printf("We need you to pick a character from The Waves. This character will be the fulcrum for the construction of your interpretation. Please type the number that corresponds to one of the characters listed below: \n"); 
    for(int i = 0; i <= 5; i++) { // prints characters left to choose from
        if(numbers[i] == 1) { 
            printf("%s\n", names[i]); 
        }
    }
    scanf("%d", &character); 
    switch(character) { // switch statement branches the code
        case 0 : // if you typed a 0
             system("clear");
             printf("I see you've selected Bernard.");
             char word[300];
             int ready;
             printf("\n \nWe are opening up Bernard's 'notebook of phrases.' But this time, it's blank. And we want you to use it to make sense of what's going on in the world of this program. Fill up the notebook!"); 
             while(strcmp(word, "finished")) { // while you haven't typed 'finished'
                   printf("\n \nPlease type a word that you think describes the experience of participating in this narrative. Type 'finished' when you have no more phrases: "); 
                   scanf("%s", word); 
                   printf("\n \n%s", word); 
              } 
             printf("\n \nThank you for filling your notebook of phrases. Please type 1 when you are ready to continue: "); 
             scanf("%d", &ready);
             numbers[0] = 0;
             break; 
        case 1 : // if you typed 1 
             system("clear");
             printf("I see you've selected Neville."); 
             char answer[200]; 
             int tries = 0; 
             while(strcmp(answer, "PERCIVAL") && tries < 7) { 
                 printf("Look at the grammar and syntax of the sentence below. There is a pattern within it that relates directly to that which Neville loves above all. The answer is one word. We will give you a clue: Beginnings matter. \n \n \n \n \n \nPeople Envision Righteous Callings In Validating All Life. \n \n \n \nType in all CAPS the word that you think cracks the code: "); 
                 scanf("%s", answer); 
                 tries++;
                 if(strcmp(answer, "PERCIVAL")) printf("\n \nUnfortunately, that was not the right pattern. Try again. \n \n \n \n"); 
             } 
             printf("\n \n \n \n \n \n \nThe correct answer was PERCIVAL. Thanks for playing. Please type 1 when you are ready to continue: \n");
             scanf("%d", &tries); 
             numbers[1] = 0; 
             break; 
        case 2 : // if you typed 2
             system("clear");
             printf("I see you've selected Louis. Try to imagine you are Louis and Louis is you. Answer these questions the way you think Louis would.");
             int yes; 
             printf("\n \nDo you want to kiss Jinny? Type 1 for yes and 0 for no: \n");
             scanf("%d", &yes); 
             printf("\n \nJinny kisses you."); // automatically prints this response, regardless of what the user inputs. The same pattern occurs for each of the questions. 
             printf("\n \nDo you want to go to school? Type 1 for yes and 0 for no: \n"); 
             scanf("%d", &yes); 
             printf("\n \nYou are now working in a bank.");
             printf("\n \nDo you want Percival to leave? Type 1 for yes and 0 for no: \n");
             scanf("%d", &yes); 
             printf("\n \nPercival leaves."); 
             printf("\n \nDo you want to get older? Type 1 for yes and 0 for no: \n"); 
             scanf("%d", &yes);
             printf("\n \nYou get much, much older."); 
             printf("\n \nDo you want to return to the farm setting of your idyllic youth? Type 1 for yes and 0 for no: \n"); 
             scanf("%d", &yes);
             printf("\n \nYou never return."); 
             printf("\n \nDo you want to die? Type 1 for yes and 0 for no: \n"); 
             scanf("%d", &yes); 
             printf("\n \nYou die."); 
             printf("\n \nThank you for playing. Please type 1 when you are ready to continue: \n"); 
             scanf("%d", &yes);
             numbers[2] = 0; 
             break; 
        case 3 : // if you typed 3
             system("clear");
             printf("I see you've selected Jinny."); 
             int move; 
             printf("\n \n \nFeel your pulse...\n \n \n \n \nType 1 when you are done: \n"); 
             scanf("%d", &move); 
             printf("\n \n \nCount your breaths...\n \n \n \n \nType 1 when you are done: \n"); 
             scanf("%d", &move); 
             printf("\n \n \nStretch your hands above your head...\n \n \n \n \nType 1 when you are done: \n"); 
             scanf("%d", &move); 
             printf("\n \n \nYou are alive \n \n \n \n \n \n \n"); 
             printf("Thank you for playing. Please type 1 when you are ready to continue: \n"); 
             scanf("%d", &move); 
             numbers[3] = 0; 
             break; 
        case 4 : // if you typed 4
             system("clear");
             printf("I see you've selected Susan.");
             char first[200];
             char second[200]; 
             char third[200]; 
             char fourth[200]; 
             char fifth[200];
             char sixth[200];
             char seventh[200];
             char eighth[200];
             char ninth[200]; 
             int go;
             printf("\n \nPlease type one word that describes a part of the human body: \n"); 
             scanf("%s", first); 
             printf("\n \nPlease type one word that describes another part of the human body: \n"); 
             scanf("%s", second); 
             printf("\n \nPlease type an action verb that a human would do: \n"); 
             scanf("%s", third); 
             printf("\n \nPlease type a one word human emotion: \n"); 
             scanf("%s", fourth); 
             printf("\n \nPlease type the plural form of a noun: \n"); 
             scanf("%s", fifth); 
             printf("\n \nPlease type the plural form of a noun that relates to the one you just chose: \n"); 
             scanf("%s", sixth); 
             printf("\n \nPlease type a plural noun that also relates: \n"); 
             scanf("%s", seventh); 
             printf("\n \n \n \n And so, Susan would say:\n \n \n \n \n'So life fills my %s. So life pours through my %s. So I am driven forward, till I could %s, as I move from dawn to dusk opening and shutting, 'No more. I am glutted with natural %s.' Yet more will come, more %s; more %s, more %s' (The Waves, 125)...\n \n \n", first, second, third, fourth, fifth, sixth, seventh); 
             printf("\n \nThank you for helping complete this piece of writing. Please type 1 when you are ready to continue: \n"); // inserts what the user typed into the sentence
             scanf("%d",&go); 
             numbers[4] = 0; 
             break; 
        case 5 : // if you typed 5
             system("clear");
             printf("I see you've selected Rhoda.");
             int i = 0;
             while(i < 2000) { 
                 i++; 
                 printf("\n");
             } 
             printf("I have no face.\n \n \n \n \n \n \n"); 
             printf("Please type 1 when you are ready to continue: \n");
             scanf("%d", &i); 
             numbers[5] = 0; 
             break; 
        default : 
             printf("Looks like you didn't do what I said and crashed the program. Boo hoo. Might want to rerun."); 
    } 
    bool recurse = false;
    for(int i = 0; i <= 5; i++) { 
        if(numbers[i] == 1) { 
            recurse = true;
        } 
    }
    if(recurse) { 
        woolf(years_left, numbers);// if not all the characters have been chosen, the function is called again, with an updated array  
        
    } else { 
        system("clear");
        printf("As you can see, you initially thought you had a choice in the characters whose lives and perspectives you explored. But, in taking you through each of the different characters, what do you think we might have been trying to show you? Each user's choices may have been slightly different. You might make a different choice the next time you choose to play. But the important observation here is that while the paths of different users in different iterations of this same game might diverge at the outset, they converge by the end of the function. We'll let that little kernel of truth sit with you. \n \n \n \n \n \n \n \n \n \n \n"); 
        int ready; 
        printf("When you're ready, and you think you've given the form and structure of this computer program sufficient thought, go ahead and type 1.  We're headed back to main...\n");
        scanf("%d", &ready);
        return true;
     } 
     return true;

} 









/* This function returns a boolean. It asks the user to provide an input and branches depending on this input to two different alternatives: certain versus not certain */
bool copenhagen( int *years_left) { 
    int certainty; 
    printf("Type 1 if you think we can construct for certain the conversation between Bohr and Heisenberg and 0 if not: "); 
    scanf("%d", &certainty); 
    bool uncertainty_remains = true; // initializes a boolean true or false 
    char *heisenberg = NULL; // string representing heisenberg
    char *bohr; // string representing bohr
    system("clear"); 
    if(certainty) { 
        char *margrethe = "judge"; 
        int year_uncertainty_principle = 1925;
        printf("Margrethe is the judge.\n");
        while(uncertainty_remains) { 
            int year_bomb_dropped = 1945;
            printf("The bomb dropped in year 1945.\n"); 
            printf("Elsinore begins the year Heisenberg created the uncertainty principle and begins to increment upward as we get closer to the year the bomb drops...\n"); 
            for(int elsinore = year_uncertainty_principle; elsinore <= year_bomb_dropped; elsinore++) { // starts at elsinore, increments by one until it gets to the year the bomb dropped
                printf("elsinore: %d\n", elsinore);
                if(elsinore == 0) { 
                    bohr = "tortured"; // updates the string
                    printf("Bohr is %s.", bohr);
                } 
                if(elsinore == 1939) printf("The manhattan project is created.\n");
                if(elsinore == year_bomb_dropped) {
                    char *manhattan_project; 
                    manhattan_project = bohr; 
                    heisenberg = "exonerated";
                    bohr = "implicated"; 
                    printf("Heisenberg is %s, and Bohr is %s.\n", heisenberg, bohr);
                } 
             }  
             printf("UNCERTAINTY GONE. NARRATIVE ACHIEVED.\n");
             uncertainty_remains = false; 
        } 
        printf("Type 1 when you are ready to contine: "); 
        scanf("%d",&certainty); 
          
     } else {
        int different_interpretations = 0; 
        while(different_interpretations < INT_MAX) { // you can put in as many interpretations as the computer can represent in memory 
            different_interpretations++; 
            char possible_interpretation[200];
            printf("Type a one-word interpretation of the meeting between Bohr and Heisenberg, based on your reading of the play. You may use as a basis for your interpretation any of the various times the characters rehearse this meeting: \n"); 
            scanf("%s", possible_interpretation); 
            char satisfied[50]; 
            printf("If you are content with the interpretation you chose, please type 'satisfied' exactly. If not, type anything: \n"); 
            scanf("%s", satisfied); 
            if(!strcmp(satisfied, "satisfied")) break;
        } 
    }
    system("clear");
    printf("We're going to return you out of this function with  meaning intact because, ultimately, no matter how many times you rehearsed, you eventually found a meaning that you were satisfied with. Perhaps it was the first one, perhaps it was the second. Perhaps it took you far more times than you were expecting. Either way. You found a meaning. You constructed it. You rehearsed a narrative. Headed into the next function now... \n \n \n \nHere we come, woolf! \n \n \n \n");
    int ready; 
    printf("Type 1 when you're ready to continue.\n"); 
    scanf("%d", &ready); 
    return true; // automatically returns true and returns to main
}      






/* This function initializes the interactive-user experience and creates a while loop that allows the user to cycle through the program as many times as she would like. It calls copenhagen and woolf to receive boolean expressions. It loops until meaning is not NULL and prints helpful explanatory messages to the user */
int main () { 
    system("clear");
    int play = 1; 
    while(play) {
    int years_left;
    printf("Please type how many years you have left to live: \n"); // prints to console
    scanf("%d", &years_left); // takes the number you input on the console and sets it equal to years left  
    void *meaning = NULL; 
      
    while(meaning == NULL && years_left > 0) { // tests that these conditions are true before continuing
        
        system("clear"); // clears the console 
        printf("Authors create narratives to fit the sense of life they have in their minds. This sense may be unstable, inchoate, or in the process of changing. But narrative is a tool to reflect both the certainty and uncertainty of existence. We, too, as consumers of narrative, play an active role in this construction of meaning. Authors siphon their own ideas into narrative and we siphon their narratives into our ideas. It is an essential give and take. Are you ready to start the journey? \n \n \n \nYou better be, because this program is starting no matter what. It's kind of like life, wouldn't you say?\n \n \n \nExecuting launch into the diegesis of copenhagen in\n \n \n \n...3 \n \n \n \n...2 \n \n \n \n...1 \n \n \n \n");  
        
        
        
        bool rehearsal = copenhagen(&years_left); // calls copenhagen, go to copenhagen
        int numbers[6] = {1, 1, 1, 1, 1, 1};
        bool waves = woolf(&years_left, numbers); // calls woolf, go to woolf
        char *found = "no matter what, the meaning is found"; // meaning no longer NULL
        meaning = found;
    }
    system("clear"); 
    printf("As you can see, regardless of what happened in the prior functions, no matter what numbers you typed, you managed to get back to the main function. If you want to take a look at the internals of this program, you will see that each of the boolean functions had to return true. There was no way around it. Although we don't want to tell you exactly what this narrative or program means (it's part of the fun to figure it out yourself), we do think a crucial detail to consider is that no matter what path you took, you garnered some meaning, some interpretation, some construction of reality. Please type 1 when you're ready to continue: "); 
    scanf("%d", &play);
    system("clear"); 
    printf("We gave you the skeleton, the hint of a pattern, and you ran wild. You might think what we've done here and what you've experienced is far off from the experience of reading a novel. We'd like to assert that there's actually not much distance at all. Can you see why? If not, maybe you'd like to play again. It's up to you.Type 1 if you want to play again and 0 if not: "); 
    scanf("%d", &play); 
    system("clear"); 
  } 
  printf("Thanks for playing!\n \n"); 
  return 0;
}
