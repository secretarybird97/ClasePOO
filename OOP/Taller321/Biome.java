package Ecosystem_superclass;

public class Biome {
	private String _name;
	private Vector _flora;
	private Vector _fauna;
	public Ecosystem _isA;

	public String getName() {
		return this._name;
	}

	public void setName(String aName) {
		this._name = aName;
	}

	public Vector getFlora() {
		return this._flora;
	}

	public void setFlora(Vector aFlora) {
		this._flora = aFlora;
	}

	public Vector getFauna() {
		return this._fauna;
	}

	public void setFauna(Vector aFauna) {
		this._fauna = aFauna;
	}
}