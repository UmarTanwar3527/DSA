nt main()
{
    char ch;
    cout<<"Pls Input";
    cin>>ch;
    
    
    if(ch>='a'&&ch<='z')
    {
        cout<<"This is smaller case";
    }
    else if(ch>='A'&&ch<='Z')
    {
        cout<<"This is upper case";
    }
    else
    {
        cout<<"This is Numeric";
    }
    return 0;
}