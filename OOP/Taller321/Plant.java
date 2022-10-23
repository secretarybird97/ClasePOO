package Ecosystem_superclass;

public class Plant {
	private String _name;
	private String _family;
	public Organism _isA;

	public String getName() {
		return this._name;
	}

	public void setName(String aName) {
		this._name = aName;
	}

	public String getFamily() {
		return this._family;
	}

	public void setFamily(String aFamily) {
		this._family = aFamily;
	}
}