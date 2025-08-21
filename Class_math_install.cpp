class Math {
public:
	static int abs(int x) {
		return x < 0 ? -x : x; //trả về trị tuyệt đối của x
	}

	static int add(int x, int y) {
		return x + y; //trả về tổng x,y
	}

	static int subtract(int x, int y) {
		return x - y; // trả về hiệu x,y
	}

	static int min(int x, int y) {
		return x < y ? x : y; //trả về gtnn
	}

	static int max(int x, int y) {
		return x > y ? x : y; //trả về gtln
	}

	static int pow(int x, int y) {
		int power = 1;
		for (int i = 0; i < y; i++) {
			power *= x;
		}
		return power; //trả về giá trị hàm mũ
	}
};
