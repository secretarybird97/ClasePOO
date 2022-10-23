package Ecosystem_superclass;

public class Pantano extends Ecosystem {
	private Object _num_anfibios;
	private Object _attribute;

	public void getNum_anfibios() {
		return this._num_anfibios;
	}

	public void setNum_anfibios(Object aNum_anfibios) {
		this._num_anfibios = aNum_anfibios;
	}

	public void getAttribute() {
		return this._attribute;
	}

	public void setAttribute(Object aAttribute) {
		this._attribute = aAttribute;
	}
}