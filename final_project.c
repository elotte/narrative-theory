#include <stdio.h>
#include <stdlib.h> 
#include <limits.h> 
#include <string.h> 
#include <stdbool.h>


bool woolf(int *years_left, int numbers[]) {
    printf("You've arrived in the world of Woolfian style. The atoms are falling on the brain and we just aren't quite sure what to do with them. We need your help. But it's going to require some choices.");
    int character;
    printf("\n \n We need you to pick a character from The Waves. This character will be the fulcrum for the construction of your interpretation. Please type a number that is one of the following: \n"); 
    for(int i = 0; i <= 5; i++) { 
        if(numbers[i] == 1) { 
            printf("%d\n", i);
        }
    }
    
    printf("They correspond to the characters: \n 0) Bernard \n 1) Neville \n 2) Louis \n 3) Jinny \n 4) Susan \n 5) Rhoda");
    scanf("%d", &character); 
    switch(character) { 
        case 0 : 
             printf("\n \nI see you've selected Bernard.");
             char word[300];
             int ready;
             printf("\n \nWe are opening up Bernard's 'notebook of phrases.' But this time, it's blank. And we want you to use it to make sense of what's going on in the world of this program. Fill up the notebook!"); 
             while(strcmp(word, "finished")) { 
                   printf("\n \nPlease type a word that you think describes the experience of participating in this narrative. Type 'finished' when you have no more phrases: "); 
                   scanf("%s", word); 
                   printf("\n \n%s", word); 
              } 
             printf("\n \nThank you for filling your notebook of phrases. Please type 1 when you are ready to continue: "); 
             scanf("%d", &ready);
             numbers[0] = 0;
             break; 
        case 1 : 
             printf("\n \nI see you've selected Neville."); 
             char answer[200]; 
             int tries = 0; 
             while(strcmp(answer, "Percival") && tries < 7) { 
                 printf("Look at the sentence below. Look at its grammer and syntax. Now there is a pattern within it that relates directly to that which Neville loves above all. The answer is one word. We will give you a clue: Beginnings matter. \n \n \n \n \n \nPeople Envision Righteous Callings In Validating All Life. \n \n \n \nType the word that you think cracks the code: "); 
                 scanf("%s", answer); 
                 tries++;
                 if(strcmp(answer, "Percival")) printf("\n \nUnfortunately, that was not the right pattern. Try again. \n \n \n \n"); 
             } 
             printf("\n \n \n \n \n \n \nThe correct answer was Percival. Thanks for playing. Please type 1 when you are ready to continue: \n");
             scanf("%d", &tries); 
             numbers[1] = 0; 
             break; 
        case 2 : 
             printf("\n \nI see you've selected Louis. Try to imagine you are Louis and Louis is you. Answer these questions the way you think Louis would.");
             int yes; 
             printf("\n \nDo you want to kiss Jinny? Type 1 for yes and 0 for no: \n");
             scanf("%d", &yes); 
             printf("\n \nJinny kisses you."); 
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
        case 3 : 
             printf("\n \nI see you've selected Jinny."); 
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
        case 4 : 
             printf("\n \nI see you've selected Susan.");
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
             printf("\n \n \n \n And so, Susan would say:\n \n \n \n \n'So life fills my %s. So life pours through my %s. So I am driven forward, till I could %s, as I move from dawn to dusk opening and shutting, 'No more. I am glutted with natural %s.' Yet more will come, more %s; more %s, more %s...\n \n \n'(125)", first, second, third, fourth, fifth, sixth, seventh); 
             printf("\n \nThank you for helping complete this piece of writing. Please type 1 when you are ready to continue: \n"); 
             scanf("%d",&go); 
             numbers[4] = 0; 
             break; 
        case 5 : 
             printf("\n \nI see you've selected Rhoda.");
             int i = 0;
             while(i < 2000) { 
                 i++; 
                 printf("\n");
             } 
             printf("I have no face. Please type 1 when you are ready to continue: \n");
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
            woolf(years_left, numbers);
        
    } else { 
        printf("\n \n \n \n As you can see, you initially thought you had a choice in the characters whose lives and perspectives you explored. But, in taking you through each of the different characters, what do you think we might have been trying to show you? Each user's choices may have been slightly different. You might make a different choice the next time you choose to play. But the important thing here is that while our paths might diverge at the outset, they converge by the end of the function. We'll let that little kernel of truth sit with you. \n \n \n \n \n \n \n \n \n \n \n"); 
        int ready; 
        printf("When you're ready, and you think you've given the form and structure of this computer program sufficient thought, go ahead and type 1. Strap that seat belt on. We're headed back to main....\n");
        scanf("%d", &ready);
        return true;
     } 
        return true;

} 


bool copenhagen( int *years_left) { 
    int certainty; 
    printf("Type 1 if you think we can construct for certain the conversation between Bohr and Heisenberg and 0 if not: "); 
    scanf("%d", &certainty); 
    bool uncertainty_remains = true;
    char *heisenberg = NULL;
    char *bohr;
    if(certainty) { 
        char *margrethe = "judge"; 
        int year_uncertainty_principle = 1925;
        printf("Margrethe is the judge.\n");
        while(uncertainty_remains) { 
            int year_bomb_dropped = 1945;
            printf("The bomb dropped in year 1945.\n"); 
            printf("Elsinore begins the year Heisenberg created the uncertainty principle and begins to increment upward as we get closer to the year the bomb drops...\n"); 
            for(int elsinore = year_uncertainty_principle; elsinore <= year_bomb_dropped; elsinore++) { 
                printf("elsinore: %d\n", elsinore);
                if(elsinore == 0) { 
                    bohr = "tortured";
                    printf("Bohr is %s.", bohr);
                } 
                if(elsinore == 1939) printf("The manhattan project is created.\n");
                if(elsinore == year_bomb_dropped) {
                    char *manhattan_project; 
                    manhattan_project = bohr; 
                    heisenberg = "exonerated";
                    bohr = "complicated"; 
                    printf("Heisenberg is %s, and Bohr is %s.\n", heisenberg, bohr);
                } 
             }  
                 printf("UNCERTAINTY GONE. NARRATIVE ACHIEVED.\n");
                 uncertainty_remains = false; 
              } 
          
       } else {
           int different_interpretations = 0; 
           while(different_interpretations < INT_MAX) {
               different_interpretations++; 
               char possible_interpretation[200];
               printf("Type a one-word interpretation of the meeting with Bohr: \n"); 
               scanf("%s", possible_interpretation); 
               char satisfied[50]; 
               printf("If you are content with the interpretation you chose, please type 'satisfied' exactly. If not, type anything: \n"); 
               scanf("%s", satisfied); 
               if(!strcmp(satisfied, "satisfied")) break;
           } 
        }
    printf("\n \n \n \n We're going to return you out of this function with  meaning intact because, ultimately, no matter how many times you rehearsed, you eventually found a meaning that you were satisfied with. Perhaps it was the first one, perhaps it was the second. Perhaps it took you far more times than you were expecting. Either way. You found a meaning. You constructed it. You rehearsed a narrative. Headed into the next function now...... \n \n \n \n Here we come, woolf! \n \n \n \n");
    int ready; 
    printf("Type 1 when you're ready to continue.\n"); 
    scanf("%d", &ready); 
    return true;
}      










int main () { 
    int play = 1; 
    while(play) {
    int years_left;
    printf("Please type how many years you have left to live: \n"); 
    scanf("%d", &years_left); // takes the number you input on the console and sets it equal to years left  
    void *meaning = NULL; 
      
    while(meaning == NULL && years_left > 0) {
        
        
        printf("\n \n \n \n Authors create narratives to fit the sense of life they have in their minds. This sense may be unstable, inchoate, or in the process of changing. But narrative is a tool to reflect both the certainty and uncertainty of existence. We, too, as consumers of narrative, play an active role in this construction of meaning. Authors siphon their own ideas into narrative and we siphon their narratives into our ideas. It is an essential give and take. Are you ready to start the journey? \n \n \n \n You better be. Because this program is starting no matter what. Kind of like life, wouldn't you say?\n \n \n \n Executing launch into the diegesis of copenhagen in ..... 3 \n \n \n \n .......2 \n \n \n \n ......1 \n \n \n \n");  
        
        
        
        bool rehearsal = copenhagen(&years_left);
        int numbers[6] = {1, 1, 1, 1, 1, 1};
        bool waves = woolf(&years_left, numbers);
        char *found = "no matter what, the meaning is found"; 
        meaning = found;
    }
    printf("\n \n \n \n \n \nAs you can see, regardless of what happened in the prior functions, no matter what numbers you typed, you managed to get back to the main function. If you want to take a look at the internals of this program, you will see that each of the boolean functions had to return true. There was no way around it. Although we don't want to tell you exactly what this narrative or program means (it's part of the fun to figure it out yourself), we do think a crucial detail to consider is that no matter what path you took, you garnered some meaning, some interpretation, some construction of reality. \n \n \n \n \nWe gave you the skeleton, the hint of a pattern, and you ran wild. \n \n \n \n \nYou might think what we've done here and what you've experienced is far off from the experience of reading a novel. \n \n We'd like to assert that there's actually not much distance at all. Can you see why? If not, maybe you'd like to play again. It's up to you. \n \n \n \nType 1 if you want to play again and 0 if not: "); 
    scanf("%d", &play); 
  } 
  printf("\n \n \n \nThanks for playing!\n \n"); 

        return 0;
}
