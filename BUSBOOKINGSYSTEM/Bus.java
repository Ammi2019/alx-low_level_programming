public class Bus{
	String company;
	String busname;
	double time;
	int numberofseats;
	String busstationname;

Bus(String company, String busname, double time, int numberofseats, String busstationname){
	this.company = company;
	this.busname = busname;
	this.time = time;
	this.numberofseats= numberofseats;
	this.busstationname = busstationname;
	}
}
class Jonda extends Bus{
	int numberofbuses;

	Jonda(String company, String busname, double time, int numberofseats, String busstationname, int numberofbuses){
	super(company, busname, time, numberofseats,busstationname);
	this.numberofbuses = numberofbuses;
	}
	
	void display(){
	System.out.println("Company name" + company);
	System.out.println("Busname" + busname);
	System.out.println("Time of Depatcher" + time);
	System.out.println("Number of Seats" + numberofseats);
	System.out.println("Bus station name" + busstationname);
	System.out.println("Number of Buses" + numberofbuses);
	}

	public static void main(String[] args){
	Jonda[] buses = {
		new Jonda("Jonda", "Rzar", 10.30, 60, "Kapata Station", 15,
		new Jonda("Jonda", "Express", 14.00, 55, "Lusaka Station", 10)};
	for (Jonda bus : buses){
	bus.display();
	System.out.println("--------------------");
	}
}
