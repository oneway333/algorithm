import { computed, onMounted, reactive, ref } from 'vue'

export default function () {
    let sum = ref(0)
    let bigSum = computed(()=> sum.value * 10)
     
    function add() {
        sum.value++
    }

    onMounted(()=>{
        sum.value += 100
    })

    // 需要给返回值
    return {bigSum, sum, add}
}