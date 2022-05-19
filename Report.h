class Report
{
	private:
		char Rep_ID[10];
		char Rep_Details[100];
    	
    public:
    	Report();
    	Report(const char Rep_ID[], const char R_Details[]);
    	void displayDetails();
    	~Report();
};