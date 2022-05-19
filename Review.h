{
	private:
		char Rev_ID[10];
		char Rev_Details[50];
    	
    public:
    	Review();
    	Review(const char Rev_ID[], const char Rev_Details[]);
    	void displayDetails();
    	~Review();
};