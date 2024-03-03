import { defineStore } from "pinia";

export const useAddStore = defineStore('add', {
    // actions放一个个的方法，用于响应组件中的”动作“
    actions: {
        increment(step:number){
            // 这里的this就很灵性，就是当前的store
            this.num += step
        }
    },
    // 存数据的
    state(){
        return {
            num: 123,
            school: 'fuck',
            addr: 'shit',
        }
    },
    getters: {
        bigSum(state){
            return state.num * 10
        },
        upperSchool(state){
            return state.school.toUpperCase()
        }
    }
})