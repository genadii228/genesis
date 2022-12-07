<?php
use App\Http\Contrillers\UserController;
Route::get('/public/{id}', [UserController::class, 'show']);
?>