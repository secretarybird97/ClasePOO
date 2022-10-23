package Ecosystem_superclass;

public class Aguas_continentales extends Ecosystem {
	private Object _num_animales_marinos;
	private Object _attribute;

	public void getNum_animales_marinos() {
		return this._num_animales_marinos;
	}

	public void setNum_animales_marinos(Object aNum_animales_marinos) {
		this._num_animales_marinos = aNum_animales_marinos;
	}

	public void getAttribute() {
		return this._attribute;
	}

	public void setAttribute(Object aAttribute) {
		this._attribute = aAttribute;
	}
}