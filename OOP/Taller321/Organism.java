package Ecosystem_superclass;

public class Organism {
	private String _name;
	private String _reign;
	public Ecosystem _hasA;
	public Plant _isA;

	public String getName() {
		return this._name;
	}

	public void setName(String aName) {
		this._name = aName;
	}

	public String getReign() {
		return this._reign;
	}

	public void setReign(String aReign) {
		this._reign = aReign;
	}
}