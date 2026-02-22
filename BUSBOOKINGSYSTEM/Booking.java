public class Booking{
	private Passenger passenger;
	private Bus bus;
	private int seatNumber;

	public Booking(Passenger passenger, Bus bus, in seatNumber){
		this.passenger = passenger;
		this.bus = bus;
		this.seatNumber = seatNumber;
	}

	public String getDetails(){
		return "Passenger: " + passenger.getName() +
			", seat: " + seatNumber +
			", Bus: " + bus.getBusNumber();
	}
}
