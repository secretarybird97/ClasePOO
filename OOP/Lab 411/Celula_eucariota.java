public class Celula_eucariota extends Celula {
	private int _nodos;
	private int _mitocondrias;

	public Celula_eucariota(String aName, int aNodos, int aMitocondrias) {
		super(aName);
		this._nodos = aNodos;
		this._mitocondrias = aMitocondrias;
	}

	public int getNodos() {
		return this._nodos;
	}

	public void setNodos(int aNodos) {
		this._nodos = aNodos;
	}

	public int getMitocondrias() {
		return this._mitocondrias;
	}

	public void setMitocondrias(int aMitocondrias) {
		this._mitocondrias = aMitocondrias;
	}
}