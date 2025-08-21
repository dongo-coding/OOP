class ArrayCalculator {
public:
	static int sumOfArray(int arr[], int n) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += arr[i];
		}
		return sum;
	}

	static double sumOfArray(double arr[], int n) {
		double sum = 0;
		for (int i = 0; i < n; i++) {
			sum += arr[i];
		}
		return sum;
	}
};

---------------------------------------------------------------------------------------------------------------------------------------------
class ArrayCalculator {
public:
	static int maxOfArray(int arr[], int n) {
		int maxValue = arr[0];
		for (int i = 1; i < n; i++) {
			if (arr[i] > maxValue) {
				maxValue = arr[i];
			}
		}
		return maxValue;
	}

	static double maxOfArray(double arr[], int n) {
		double maxValue = arr[0];
		for (int i = 1; i < n; i++) {
			if (arr[i] > maxValue) {
				maxValue = arr[i];
			}
		}
		return maxValue;
	}

	static int minOfArray(int arr[], int n) {
		int minValue = arr[0];
		for (int i = 1; i < n; i++) {
			if (arr[i] < minValue) {
				minValue = arr[i];
			}
		}
		return minValue;
	}

	static double minOfArray(double arr[], int n) {
		double minValue = arr[0];
		for (int i = 1; i < n; i++) {
			if (arr[i] < minValue) {
				minValue = arr[i];
			}
		}
		return minValue;
	}
};
