fun Bubble_Sort(numbers: Array<Int>) {
    val N:Int = numbers.size
    for (pass in 0 until (N - 1)) {
        // A single pass of bubble sort
        for (currentPosition in 0 until (N - pass - 1)) {
            // This is a single step
            if (numbers[currentPosition] > numbers[currentPosition + 1]) {
                val tmp = numbers[currentPosition]
                numbers[currentPosition] = numbers[currentPosition + 1]
                numbers[currentPosition + 1] = tmp
            }
        }
    }

    //Printing Sorted Array
    for (i in 0 until (N-1)) {
        print(numbers[i])
    }
}

fun main(args: Array<String>){
    var numbers = Array<Int>(10){0}
    val N:Int = numbers.size

    for (i in 0 until (N - 1)){
        numbers[i] = readLine()!!.toInt()
    }

    Bubble_Sort(numbers)
}