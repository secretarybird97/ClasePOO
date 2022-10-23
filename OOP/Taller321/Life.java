package Ecosystem_superclass;

import java.util.Vector;
import Ecosystem_superclass.Ecosystem;

public class Life {
	private Ecosystem _ecosystem;
	public Vector<Ecosystem> _partOf = new Vector<Ecosystem>();

	public Ecosystem getEcosystem() {
		return this._ecosystem;
	}

	public void setEcosystem(Ecosystem aEcosystem) {
		this._ecosystem = aEcosystem;
	}
}