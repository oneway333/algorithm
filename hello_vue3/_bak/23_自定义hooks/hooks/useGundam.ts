import { onMounted, reactive, ref } from 'vue'
import axios from 'axios'

export default function () {
    let Gundam = reactive([
        'https://ns-strategy.cdn.bcebos.com/ns-strategy/upload/fc_big_pic/part-00336-989.jpg',
        'https://img1.baidu.com/it/u=3697838857,1967945289&fm=253&fmt=auto&app=120&f=JPEG?w=800&h=500'
    ])
    // 异步，应该是用来防止整个网页被卡住的
    // 
    async function oneMore() {
        try {
            // let result = await axios.get('http://localhost:5010/api/list')  // 依然不能写全的地址
            let result = await axios.get('/api/list')
            // console.log(result.data.url);
            Gundam.push(result.data.url)
        } catch (error) {
            alert(error)
        }

    }

    // 还可以使用钩子
    onMounted(()=>{
        oneMore()
    })

    return {Gundam, oneMore}

}

