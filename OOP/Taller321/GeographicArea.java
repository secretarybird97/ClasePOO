package Ecosystem_superclass;

public class GeographicArea {
	private String _name;
	private String _location;
	public Ecosystem _isA;

	public String getName() {
		return this._name;
	}

	public void setName(String aName) {
		this._name = aName;
	}

	public String getLocation() {
		return this._location;
	}

	public void setLocation(String aLocation) {
		this._location = aLocation;
	}
}