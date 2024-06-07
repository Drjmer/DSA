 Hero(Hero& temp)
    {
        cout<<"Copy Constructor Bhai Called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
        // this->name=temp.name;--->do shallow copy

        //implementing deep copy instead of shallow copy
        char *t=new char[strlen(temp.name)+1];
        strcpy(t,temp.name);
        this->name=t;
        
    }