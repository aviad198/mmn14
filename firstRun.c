

void firstRun(){
    char c;
    while(c=fgetc(fp)!= feof(fp)){
            if (c==";")
               skipLine();
            else if (isLabel(c))
                labelFlag();
            else if (isGuide(c))
                doGuide();
            else if (isCommand(c)
                doCommand();
            else
                fprintf(stderr, "No such statement\n");
    }

    bool isLabel(){
        
    }
}