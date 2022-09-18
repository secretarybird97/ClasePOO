public class Biome {

	private String name;
	private Vector flora;
	private Vector fauna;

	public String getName() {
		return this.name;
	}

	/**
	 * 
	 * @param name
	 */
	public void setName(String name) {
		this.name = name;
	}

	public Vector getFlora() {
		return this.flora;
	}

	/**
	 * 
	 * @param flora
	 */
	public void setFlora(Vector flora) {
		this.flora = flora;
	}

	public Vector getFauna() {
		return this.fauna;
	}

	/**
	 * 
	 * @param fauna
	 */
	public void setFauna(Vector fauna) {
		this.fauna = fauna;
	}

}