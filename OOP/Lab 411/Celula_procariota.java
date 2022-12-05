public class Celula_procariota extends Celula {
	private int _nodos;

	public Celula_procariota(String aName, int aNodos) {
		super(aName);
		this._nodos = aNodos;
	}

	public int getNodos() {
		return this._nodos;
	}

	public void setNodos(int aNodos) {
		this._nodos = aNodos;
	}
}