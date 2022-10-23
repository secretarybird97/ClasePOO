package Ecosystem_superclass;

import java.util.Vector;
import Ecosystem_superclass.Organism;

public class Ecosystem {
	private Vector _organism;
	private String _name;
	public Life _partOf;
	public Vector<Organism> _hasA = new Vector<Organism>();
	public Biome _isA;

	public Vector getOrganism() {
		return this._organism;
	}

	public void setOrganism(Vector aOrganism) {
		this._organism = aOrganism;
	}

	public String getName() {
		return this._name;
	}

	public void setName(String aName) {
		this._name = aName;
	}
}